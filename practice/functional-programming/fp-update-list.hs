main :: IO ()
main = getContents
    >>= return. map read. lines
    >>= return. map abs
    >>= mapM_ print
