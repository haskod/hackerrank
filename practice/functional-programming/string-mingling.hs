main :: IO ()
main = getContents
    >>= return. lines
    >>= (\[x,y] -> putStrLn $ combine x y)
    
combine :: String -> String -> String
combine [] [] = []
combine (x:xs) (y:ys) = [x] ++ [y] ++ combine xs ys
