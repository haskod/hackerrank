main :: IO ()
main = (getContents :: IO String)
    >>= return. lines
    >>= (\(x:xs) -> return $ (read x :: Int, xs))
    >>= (\(n,list) -> return $ map (replicate n) list)
    >>= (\list -> mapM_ (putStr. unlines) list)
