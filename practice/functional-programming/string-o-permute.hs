main :: IO ()
main = getContents
    >>= return. tail. lines
    >>= return. map swap
    >>= mapM_ putStrLn
    
swap :: String -> String
swap [] = []
swap (x1:x2:xs) = [x2] ++ [x1] ++ swap xs
