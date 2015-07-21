* out/test_path_args1.write
simplified: out/test_path_args1.write
filename: test_path_args1.write
dir: out
exists: true
  error? nope
stat: is_dir=true is_reg=false
  error? nope
open: out/test_path_args1.write
  error? nope
first_line: 
  error? Cannot read `out/test_path_args1.write`: Is a directory
content: 0 chars
  error? Cannot read `out/test_path_args1.write`: Is a directory
content: 0 bytes
  error? Cannot read `out/test_path_args1.write`: Is a directory
content: 0 lines
  error? Cannot read `out/test_path_args1.write`: Is a directory
content: 0 files
  error? nope
* out/test_path_args1.write/file.txt
simplified: out/test_path_args1.write/file.txt
filename: file.txt
dir: out/test_path_args1.write
exists: false
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
stat: nope
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
open: out/test_path_args1.write/file.txt
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
first_line: 
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
content: 0 chars
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
content: 0 bytes
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
content: 0 lines
  error? Cannot open `out/test_path_args1.write/file.txt`: No such file or directory
content: 0 files
  error? Cannot list directory `out/test_path_args1.write/file.txt`: No such file or directory
* out/test_path_args1.write/file.txt
simplified: out/test_path_args1.write/file.txt
filename: file.txt
dir: out/test_path_args1.write
exists: true
  error? nope
stat: is_dir=false is_reg=true
  error? nope
open: out/test_path_args1.write/file.txt
  error? nope
first_line: hello world!
  error? nope
content: 12 chars
  error? nope
content: 12 bytes
  error? nope
content: 1 lines
  error? nope
content: 0 files
  error? Cannot list directory `out/test_path_args1.write/file.txt`: Not a directory
* out/test_path_args1.write/dir
simplified: out/test_path_args1.write/dir
filename: dir
dir: out/test_path_args1.write
exists: true
  error? nope
stat: is_dir=true is_reg=false
  error? nope
open: out/test_path_args1.write/dir
  error? nope
first_line: 
  error? Cannot read `out/test_path_args1.write/dir`: Is a directory
content: 0 chars
  error? Cannot read `out/test_path_args1.write/dir`: Is a directory
content: 0 bytes
  error? Cannot read `out/test_path_args1.write/dir`: Is a directory
content: 0 lines
  error? Cannot read `out/test_path_args1.write/dir`: Is a directory
content: 1 files
  error? nope
dir/
file.txt
