// Counter calories 
const prompt = require('./prompt').prompt

async function counterCalories() {

    let accumulator = 0 
    for(let i = 0; i < 3; i++){
        let calorie = await prompt(`Calories at meal ${i}: `)        
        accumulator += parseInt(calorie)
    }
    console.log(`You had a total of ${accumulator} calories.`)
    readline.close()
}

counterCalories()