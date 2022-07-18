function print(letters) {
    let number = letters.charCodeAt(0) // converte string para número
    do {
        console.log(letters)
        number++
        letters = String.fromCharCode(number) //converte numeros para string 
    } while (letters <= 'z');
}

print('A')