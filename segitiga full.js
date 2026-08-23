// Pola 1: Piramida (Loop for)
let rows = 5;
for (let i = 1; i <= rows; i++) {
    let line = "";
    for (let j = 1; j <= rows - i; j++) {
        line += " ";
    }
    for (let k = 1; k <= 2 * i - 1; k++) {
        line += "*";
    }
    console.log(line);
}
console.log(""); 


let rows2 = 5;
while (rows2 >= 1) {
    console.log("*".repeat(rows2));
    rows2--;
}
console.log("");

let rows3 = 5;
let i = 1;
do {
    console.log(" ".repeat(rows3 - i) + "*".repeat(i));
    i++;
} while (i <= rows3);
