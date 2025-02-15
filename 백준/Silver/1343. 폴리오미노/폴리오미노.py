import sys

def fill_board(board):
    parts = board.split(".")
    result = []
    idx = 0

    while idx < len(board):
        if board[idx] == '.':
            result.append('.')
            idx += 1
        else:
            start = idx
            while idx < len(board) and board[idx] == 'X':
                idx += 1
            length = idx - start
            if length % 2 != 0:
                return "-1"
            result.append("AAAA" * (length // 4) + "BB" * ((length % 4) // 2))
    
    return "".join(result)

def main():
    board = sys.stdin.readline().strip()
    print(fill_board(board))

if __name__ == "__main__":
    main()
