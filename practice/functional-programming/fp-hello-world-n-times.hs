main :: IO ()
main = (readLn :: IO Int)
    >>= (\n -> return $ replicate n "Hello World")
    >>= putStrLn. unlines
