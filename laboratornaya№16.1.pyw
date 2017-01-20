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
