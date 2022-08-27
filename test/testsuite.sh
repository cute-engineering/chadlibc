#/bin/sh

result=0

for exe in test/*.exe
do
    TEST_ENV=some_value ./$exe
    if [ "$?" -eq "0" ]
    then
        echo "$exe - PASSED"
    else
        echo "$exe - FAILED"
        result=$((result+1))
    fi
done

exit $result
