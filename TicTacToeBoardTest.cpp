/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){
			
		} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	TicTacToeBoard t; 
	t.clearBoard(); 
	ASSERT_TRUE(t.checkIfBoardIsClear());	
}

TEST(TicTacToeBoardTest, testingTheConstructor)
{
	TicTacToeBoard t; 
	Piece p = t.getPiece(0, 0); 
  ASSERT_TRUE(p == Blank); 	
} 

TEST(TicTacToeBoardTest, testingPlacingPiece)
{
	TicTacToeBoard t; 	
	Piece p = t.placePiece(0, 0); 
	ASSERT_TRUE(p == O); 
}

TEST(TicTacToeBoardTest, stillTestingPlacingPiece)
{
	TicTacToeBoard t; 
	t.placePiece(0, 0); 
	ASSERT_TRUE(t.getPiece(0, 0) == X);
}

TEST(TicTacToeBoardTest, testingChangeOfPieces)
{
	TicTacToeBoard t; 
	Piece p = t.getTurn(); 	
	ASSERT_TRUE(p == X);
}

TEST(TicTacToeBoardTest, testingChangeOfPieces1)
{
	TicTacToeBoard t; 
	t.placePiece(0, 0); 
	ASSERT_TRUE(t.getTurn() == O);
}
