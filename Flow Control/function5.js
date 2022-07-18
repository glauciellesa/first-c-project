function main(valor1, valor2, valor3) {
    product(valor1, valor2, valor3)
}

function product(a, b, c) {
    let result = a * b * c
    console.log(`O valor do calculo ${a} * ${b} * ${c} = ${result}`)
}

main(3, 4, 5)
