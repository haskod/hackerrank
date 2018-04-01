main :: IO ()
main = getContents
    >>= return. map read. lines
    >>= return. map fib. tail
    >>= mapM_ print
    
fib :: Int -> Integer
fib n = mod (evaluate n [0, 1]) (10^8+7)
  where
    evaluate :: Int -> [Integer] -> Integer
    evaluate 0 (x:_) = x
    evaluate n [x,y] = evaluate (n - 1) [y, x + y]
