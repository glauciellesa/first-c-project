

function printArray() {
    let temperature = [74.9, 73.7, 75.8, 78.2]
   
    for(let i = 0; i < temperature.length; i++){
        console.log(`Station ${i}, temps ${temperature[i]}`)
    }

}

printArray()