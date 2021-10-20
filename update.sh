while [ 1 ]
do
	
	sleep 300
	git add 660.
	a=$(echo $RANDOM | md5 | head -c 20)
	git commit -m "$a"
	git push
done
