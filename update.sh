while [ 1 ]
do
	
	sleep 10
	git add .
	a=$(echo $RANDOM | md5 | head -c 20)
	b=$(read -t 5 -p "Enter your commit > ")
	# echo $?
	if [ $? == 0 ]
	then
		git commit -m "$b"
	elif [ $? == 1 ]
	then
		git commit -m "$a"
	fi
	git push
done
