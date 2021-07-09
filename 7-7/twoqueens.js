

// JavaScript implementation of the approach


// Function that returns true if the queen
// can attack the opponent
function canQueenAttack(queen1row, queen1col, queen2row, queen2col)
{
	// If queen and the opponent are in the same row
	if (queen1row == queen2row)
		return true;

	// If queen and the opponent are in the same column
	if (queen1col == queen2col)
		return true;

	// If queen can attack diagonally
	if (Math.abs(queen1row - queen2row) == Math.abs(queen1col - queen2col))
		return true;

	// Opponent is safe
	return false;
}

// Driver code

	var queen1row = 1, queen1col = 1;
	var queen2row = 1, queen2col = 2;
	//var queen2row = 1, queen2col = 2;
	
	
	if (canQueenAttack(queen1row, queen1col, queen2row, queen2col))
		console.log("Yes,Queens are attacking each other.");
	else
		console.log("No,Queens are not attacking each other.");
		
		
