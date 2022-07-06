insert(key, value):
    index = hashFn(key)
    array[index] = (key, value)

find(key):
    index = hashFn(key)
    return array[index]

remove(key):
    index = hashFn(key)
    array[index] = null