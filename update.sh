while [ 1 ]
do
	sleep 1m
	git add .
	a=$(echo $RANDOM | md5 | head -c 20)
	git commit -m "$a"
	git push
done
