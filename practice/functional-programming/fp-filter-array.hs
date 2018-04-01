main :: IO ()
main = (getContents :: IO String)
    >>= return. lines
    >>= (\(x:xs) -> return (read x :: Int, map read $ xs :: [Int]))
    >>= (\(x,list) -> return $ filter (< x) list)
    >>= (\list -> mapM_ print list)
