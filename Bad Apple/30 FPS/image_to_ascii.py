import os
from PIL import Image

# Bảng ký tự ASCII từ sáng đến tối (ký tự trống cho nền đen)
ASCII_CHARS = " .:-=+*#%@"

def resize_image(image, new_width=100):
    """Thay đổi kích thước ảnh để phù hợp với ASCII art."""
    width, height = image.size
    aspect_ratio = height / width
    new_height = int(new_width * aspect_ratio * 0.55)  # Điều chỉnh tỷ lệ để phù hợp hiển thị
    return image.resize((new_width, new_height))

def grayify(image):
    """Chuyển ảnh sang mức xám."""
    return image.convert("L")

def pixels_to_ascii(image):
    """Chuyển pixel ảnh thành ký tự ASCII."""
    pixels = image.getdata()
    ascii_str = "".join([ASCII_CHARS[min(pixel // 25, len(ASCII_CHARS)-1)] for pixel in pixels])
    return ascii_str

def image_to_ascii(image_path, new_width=100):
    """Chuyển đổi một ảnh thành ASCII art."""
    try:
        image = Image.open(image_path)
    except Exception as e:
        print(f"Lỗi khi mở ảnh {image_path}: {e}")
        return None

    image = resize_image(image, new_width)
    image = grayify(image)
    ascii_str = pixels_to_ascii(image)
    ascii_art = "\n".join(
        [ascii_str[i:i + new_width] for i in range(0, len(ascii_str), new_width)]
    )
    return ascii_art

def process_folder_to_ascii(input_folder, output_folder, new_width=100):
    """Xử lý toàn bộ ảnh trong folder và lưu ASCII art vào file .txt."""
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)

    for filename in sorted(os.listdir(input_folder)):  # Đảm bảo khung hình được xử lý theo thứ tự
        if filename.endswith((".png", ".jpg", ".jpeg")):  # Chỉ xử lý file ảnh
            input_path = os.path.join(input_folder, filename)
            output_path = os.path.join(output_folder, f"{os.path.splitext(filename)[0]}.txt")

            ascii_art = image_to_ascii(input_path, new_width)
            if ascii_art:
                # Ghi file với mã hóa UTF-8 để tránh lỗi UnicodeEncodeError
                try:
                    with open(output_path, "w", encoding="utf-8") as f:
                        f.write(ascii_art)
                    print(f"Đã xử lý: {filename}")
                except Exception as e:
                    print(f"Lỗi khi ghi file {output_path}: {e}")

# Thư mục đầu vào (ảnh khung hình) và đầu ra (ASCII art)
input_folder = "frames/"
output_folder = "ascii_frames/"

# Đảm bảo rằng thư mục đầu vào tồn tại
if not os.path.exists(input_folder):
    print(f"Thư mục đầu vào '{input_folder}' không tồn tại.")
else:
    # Chuyển đổi toàn bộ ảnh trong thư mục
    process_folder_to_ascii(input_folder, output_folder, new_width=100)
