ffmpeg -i pad0.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad0.raw
ffmpeg -i pad1.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad1.raw
ffmpeg -i pad2.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad2.raw
ffmpeg -i pad3.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad3.raw
ffmpeg -i pad4.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad4.raw
ffmpeg -i pad5.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad5.raw
ffmpeg -i pad6.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad6.raw
ffmpeg -i pad7.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad7.raw
ffmpeg -i pad8.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad8.raw
ffmpeg -i pad9.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad9.raw
ffmpeg -i pad10.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad10.raw
ffmpeg -i pad11.wav -filter:a "volume=0.5" -ac 1 -ar 32768 -f s8 pad11.raw

python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad0.raw" "..\pad0.h" "pad0" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad1.raw" "..\pad1.h" "pad1" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad2.raw" "..\pad2.h" "pad2" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad3.raw" "..\pad3.h" "pad3" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad4.raw" "..\pad4.h" "pad4" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad5.raw" "..\pad5.h" "pad5" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad6.raw" "..\pad6.h" "pad6" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad7.raw" "..\pad7.h" "pad7" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad8.raw" "..\pad8.h" "pad8" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad9.raw" "..\pad9.h" "pad9" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad10.raw" "..\pad10.h" "pad10" 32768
python "..\..\lib\Mozzi-master\extras\python\char2mozzi.py" "pad11.raw" "..\pad11.h" "pad11" 32768

del *.raw