while read p
do
	echo "$p"
done <changeLog.txt | grep 1fc75
