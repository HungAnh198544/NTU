@echo off
set "input_folder=frames"
set "output_folder=ascii_frames"
set "width=100"

REM Tạo thư mục đầu ra nếu chưa tồn tại
if not exist "%output_folder%" mkdir "%output_folder%"

REM Duyệt qua tất cả file ảnh trong thư mục input
for %%f in (%input_folder%\*.png) do (
    set "input_file=%%f"
    set "output_file=%output_folder%\%%~nf.txt"
    echo Đang xử lý %%f...
    python image_to_ascii.py "%%f" "%output_file%" %width%
)

echo Đã hoàn thành!
pause
