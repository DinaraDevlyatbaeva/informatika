n = int(input("Введите размер массива от 1 до 200: "))

#Ввод и вывод элементов массива
while 1:
    try:
        array = [float(input("Введите целое число:\n")) for x in range(n)]
        print("Элементы массива:")
        print(array)
        break
    except ValueError:
        print("Вы ошиблись. Попробуйте снова.")

#Сортировка элементов массива
array.sort()
print("Элементы отсортированного массива:")
print(array)

#Копирование элементов массива, исключая повторяющиеся элементы
array2 = []
for i in array:
    if i not in array2:
        array2.append(i)
print("Эллементы скопированного массива без повторяющихся элементов:")
print(array2)

#Вывод 3-его минимума и 4-ого максимума массива
min3 = array2[2]
max4 = array2[len(array2)-4]
print("Третий мининум массива: ", min3)
print("Четвертый максимум массива: ", max4)
