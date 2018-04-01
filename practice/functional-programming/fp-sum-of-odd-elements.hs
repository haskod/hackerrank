main :: IO ()
main = (getContents :: IO String)
    >>= return. lines
    >>= return. map read
    >>= return. filter (odd)
    >>= print. sum
