/*Os triângulos podem ser classificados em 3 tipos quanto ao tamanho de seus lados:
Equilátero: Os três lados são iguais. Isósceles: Dois lados iguais. Escaleno: Todos 
os lados são diferentes. Crie uma função que recebe os comprimentos dos três lados 
de um triângulo e retorne sua classificação quanto ao tamanho de seus lados. 
(Neste exemplo deve-se abstrair as condições matemáticas de existência de um triângulo). */

function classifyTriangle(side1, side2, side3) {
    if (side1 == side2 && side2 == side3) {
        console.log("Equilátero")
    } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        console.log("Isósceles")
    } else {
        console.log("Escaleno")
    }
}
classifyTriangle(3,3,3)
classifyTriangle(3,3,2)
classifyTriangle(1,2,3)
