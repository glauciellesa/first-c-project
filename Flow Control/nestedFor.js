function flatFor () {
    const offset = 'A'.charCodeAt(0) //Referencial de início na tabela Ascii
    for(let i = offset; i <= 'Z'.charCodeAt(0); i++) {
            console.log((i - offset + 1 ) + ' - ' + String.fromCharCode(i))
        }
    }
flatFor()


function nestedFor() {
    for(let i = 'A'.charCodeAt(0); i < 'k'.charCodeAt(0); i++) {
        for(let x = 0; x < 10; x++) {
            console.log(String.fromCharCode(i),x)
        }
    }
}

nestedFor()