//Creating module - Commons JS https://www.sitepoint.com/understanding-module-exports-exports-node-js/


const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});
const prompt = (query) => new Promise((resolve) => readline.question(query, resolve));
exports.prompt = prompt