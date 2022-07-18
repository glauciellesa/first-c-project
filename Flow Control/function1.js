function main() {
    console.log("I'm main function")
    called()
    console.log("Ended the process. Thanks, called()")

}

function called() {
    console.log("I'll be called as soon as main() runs.")
}

main();