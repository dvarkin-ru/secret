# Одноалфавитный шифр и его криптоанализ

Alpha шифрует одноалфавитным шифром с помощью ключа сообщение.
Dealpha анализирует пример текста этого алфавита и зашифрованное сообщение, и на основании статистики делает предположение о ключе и зашифрованном сообщении.

Пример работы с содержимым репозитория:

	$ make
	gcc alpha.c -o alpha
	gcc dealpha.c -o dealpha
	$ ./alpha "can you imagine an imaginary menagerie manager imagining managing an imaginary menagerie" qwertyuiopasdfghjklzxcvbnm
	ENCODED MESSAGE: EQF NGX ODQUOFT QF ODQUOFQKN DTFQUTKOT DQFQUTK ODQUOFOFU DQFQUOFU QF ODQUOFQKN DTFQUTKOT
	$ ./dealpha "you and i can imagine an imaginary manager" "EQF NGX ODQUOFT QF ODQUOFQKN DTFQUTKOT DQFQUTK ODQUOFOFU DQFQUOFU QF ODQUOFQKN DTFQUTKOT"
	KEY: MCNDRYIAEGU
	DECODED MESSAGE: CAN YDU IMAGINE AN IMAGINARY MENAGERIE MANAGER IMAGINING MANAGING AN IMAGINARY MENAGERIE

