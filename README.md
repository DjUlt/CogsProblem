# Шестерёнки
Ограничение | Значение
--- | ---
Ограничение времени |	0.5 секунд
Ограничение памяти | 256Mb
Ввод | стандартный ввод или input.txt
Вывод | стандартный вывод или output.txt

Несколько шестерёнок соприкасается с зубчатой осью, одним зубцом каждая. Когда ось поворачивается на один зубец по часовой стрелке, все шестерёнки поворачиваются на один зубец против часовой стрелки. На шестерёнках может быть разное количество зубцов, но на каждой есть один, покрашенный зелёной краской.

Ось поворачивается с постоянной скоростью – на один зубец в секунду по часовой стрелке. Известно, что, если продолжать крутить ось бесконечно долго, в какой-то момент все зелёные зубцы одновременно соприкоснутся с осью. Также для каждой шестерёнки известно, сколько секунд требуется, чтобы из начального положения получить такое, в котором зелёный зубец этой шестерёнки впервые соприкоснётся с осью.

Выясните, в какой момент времени все зелёные зубцы впервые соприкоснутся с осью одновременно.

### Формат ввода
В первой строке входного файла записано число N (2 ≤ N ≤ 4) – количество шестерёнок. Вторая строка содержит N чисел A1, A2,..., AN (5 ≤ Ak ≤ 50), записанных через пробел – количество зубцов на шестерёнках. В третьей же строке записано N чисел B1, B2,..., BN (0 ≤ Bk < Ak), также через пробел – это моменты первого соприкосновения зелёного зубца каждой шестерёнки с осью. Другими словами, зелёный зубец k-й шестерёнки соприкасается с осью в моменты Bk, Bk + Ak, Bk + 2Ak, Bk + 3Ak,... .

### Формат вывода
В выходной файл выведите одно число — номер секунды, в которую все зелёные зубцы впервые соприкос- нутся с осью одновременно.

## Пример 1
Вывод | Ввод
--- | ---
0 | <ul><li>2</li><li>5 6</li><li>0 0</li></ul>

## Пример 2
Вывод | Ввод
--- | ---
206 | <ul><li>3</li><li>5 6 7</li><li>1 2 3</li></ul>

## Пример 3
Вывод | Ввод
--- | ---
25 | <ul><li>4</li><li>50 50 50 40</li><li>25 25 25 25</li></ul>
