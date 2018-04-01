main :: IO ()
main = (getContents :: IO String)
    >>= return. lines
    >>= return. odds
    >>= mapM_ putStrLn

odds :: Ord a => [a] -> [a]
odds [] = []
odds (_:x:xs) = x : odds xs
