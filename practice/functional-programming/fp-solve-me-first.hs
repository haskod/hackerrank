main :: IO ()
main = (getContents :: IO String)
    >>= return. lines
    >>= (\[x,y] -> return [read x :: Int, read y :: Int])
    >>= (\[x,y] -> return $ x + y)
    >>= print
