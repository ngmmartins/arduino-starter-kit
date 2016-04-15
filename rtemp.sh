#/bin/bash
while true
do
  read LINE < /dev/ttyACM0
  echo $LINE
done
