main :: IO ()
main = getContents
    >>= return. tail. lines
    >>= mapM_ (putStrLn. unwords. rotate)
    
rotate :: String -> [String]
rotate str = [drop t $ take (l + t) s | t <- [1..l]]
  where
    s = (concat. repeat) str
    l = length str
