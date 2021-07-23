#/bin/sh

for exe in test/*.exe
do
    ./$exe
    if [ "$?" -eq "0" ]
    then
        echo "$exe - PASSED"
    else
        echo "$exe - FAILED"
    fi
done
