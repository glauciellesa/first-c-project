function main() {
    console.log("At first the raven was like:")
    repeat(1)
    console.log("At first the raven was like:")
    repeat(5)
    
}

function repeat(count) {
    for (let i = 0; i < count; i++) {
        console.log("Nevermore!")
    }
}

main()