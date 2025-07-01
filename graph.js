const array = [[9, 2], [1, 8], [6, 3], [5, 9]];

function Graph() {
    // Get sorted unique X and Y coordinates
    let rows = [...new Set(array.map(el => el[0]))].sort((a, b) => b - a);
    let cols = [...new Set(array.map(el => el[1]))].sort((a, b) => a - b);

    // Plot the graph
    for (let i = 0; i < rows.length; i++) {
        let rowStr = `${rows[i]}|`;

        for (let j = 0; j < cols.length; j++) {
            let pointExists = array.some(([x, y]) => x === rows[i] && y === cols[j]);
            rowStr += pointExists ? " *" : "  ";
        }

        console.log(rowStr);
    }

    // Print axis line
    let axisLine = " |" + "--".repeat(cols.length);
    let colNumbers = "  " + cols.map(c => c.toString().padStart(2, ' ')).join("");

    console.log(axisLine);
    console.log(colNumbers);
}

Graph();
