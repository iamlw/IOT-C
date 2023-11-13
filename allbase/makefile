EXEC = main
OBJ = main.o myutils.o
cc = gcc

${EXEC}:${OBJ}
	${cc} $^ -o ${EXEC}


%.o:%.c
	${cc} -c $< -o $@

clear:
	rm ${EXEC} *.o
	echo "删除成功"
get:
	echo $(USER)

