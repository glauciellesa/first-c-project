function main() {
    for(let i = 0; i < 10; i++) {
        count('#', i*2)
    }
}

function count(ch, numero) {
    let print = ''
    for(let x = 0; x < numero; x++){
        print += ch
    }
    console.log(print)
}


main()