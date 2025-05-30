#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <windows.h> // Windows API
#include <stdlib.h>
#include <conio.h>

#define BUFFER_SIZE 4096  // Kích thước của buffer
#define TOTAL_FRAMES 6572 // Tổng số khung hình
#define FRAME_DURATION 33333 // Thời gian mỗi khung hình (microseconds)

int main() {
    FILE *list_file, *file;
    char file_name[200];
    char frame_buffer[BUFFER_SIZE * 10]; // Bộ đệm để chứa toàn bộ nội dung khung hình
    LARGE_INTEGER frequency, start_time, current_time;
    double elapsed_time;
    int frame_count = 0; // Biến đếm số frame đã hiển thị

    // Thông báo bắt đầu
    printf("Press Enter to start playing 'Bad Apple [30 FPS]'...\n");
    getchar(); // Chờ user nhấn Enter
    
	// Xóa bất kỳ ký tự dư thừa nào trong bộ đệm đầu vào
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	// Sau khi nhấn Enter, in dòng thông báo của dự án
    printf("Project - [Touhou] Bad Apple!! [30 FPS] - [ASCII]'\n");
    
    // Lấy tần số bộ đếm hiệu năng cao
    QueryPerformanceFrequency(&frequency);

    // Mở file danh sách các khung ASCII
    list_file = fopen("list.txt", "r");
    if (list_file == NULL) {
        perror("Failed to open list file");
        return 1;
    }

    // Lấy thời gian bắt đầu
    QueryPerformanceCounter(&start_time);

    while (fgets(file_name, sizeof(file_name), list_file) != NULL) {
        file_name[strcspn(file_name, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

        // Mở file ASCII khung hình
        file = fopen(file_name, "r");
        if (file == NULL) {
            fprintf(stderr, "Failed to open file: %s\n", file_name);
            continue;
        }

        // Xoá màn hình (cho hiệu ứng động) chỉ nếu terminal hỗ trợ
        if (isatty(fileno(stdout))) {
            printf("\033[H\033[J"); // Lệnh xóa màn hình (chỉ áp dụng trong terminal hỗ trợ ANSI)
        }

        // Đọc toàn bộ nội dung của file ASCII vào frame_buffer
        memset(frame_buffer, 0, sizeof(frame_buffer));
        fread(frame_buffer, sizeof(char), sizeof(frame_buffer) - 1, file);
        fclose(file);

        // In toàn bộ khung hình cùng một lúc
        printf("%s", frame_buffer);

        // Tính toán phần trăm hoàn thành
        float percentage = ((float)frame_count / TOTAL_FRAMES) * 100;
		if (frame_count == TOTAL_FRAMES) {
    		percentage = 100.0f; // Đảm bảo phần trăm luôn 100 khi kết thúc
		}		

        printf("\nProject - '[Touhou] Bad Apple!! [30 FPS] - [ASCII]'  (frames: %d/%d)\n", frame_count + 1, TOTAL_FRAMES);
        printf("Progress: [");
        for (int i = 0; i < 50; i++) {
            if (i < (int)percentage / 2) {
                printf("=");
            } else {
                printf(" ");
            }
        }
        printf("] %.2f%%\n", percentage);

        fflush(stdout); // Đảm bảo in ra màn hình ngay lập tức

        // Tính thời gian đã trôi qua
        QueryPerformanceCounter(&current_time);
        elapsed_time = (double)(current_time.QuadPart - start_time.QuadPart) * 1181717.0 / frequency.QuadPart;

        // Tính toán thời gian ngủ còn lại
        double target_time = (frame_count + 1) * FRAME_DURATION; // Thời gian mục tiêu (microseconds)
        double sleep_duration = target_time - elapsed_time;

        if (sleep_duration > 0) {
            Sleep(sleep_duration / 1000); // Ngủ (chuyển đổi sang milliseconds)
        }

        frame_count++; // Tăng số frame đã xử lý
    }

    fclose(list_file); // Đóng danh sách file
    return 0;
}