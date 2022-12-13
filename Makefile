all:
	gcc ./TR3_539368.c -o TR3_539368

run:
	./TR3_539368

clean:
	rm -f TR3_539368.exe || del TR3_539368.exe