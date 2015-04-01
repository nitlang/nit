module Main where

	import System.Environment (getArgs)
	import Text.Pandoc

	-- Reads a String and parses it as a Pandoc instance
	readDoc :: String -> Pandoc
	readDoc = readMarkdown def

	-- Writes a Pandoc instances as a String
	writeDoc :: Pandoc -> String
	writeDoc = writeHtmlString def

	-- Reads markdown, writes HTML and prints it in stdout
	doBench :: String -> IO ()
	doBench fileName	= do
		content			<- readFile fileName
		let markdown	= readDoc content
		let html		=  writeDoc markdown
		print html

	-- Executes `doBench` n times
	loop :: Int -> String -> IO ()
	loop 0 _ = return ()
	loop n fileName = do
		doBench fileName
		loop (n  - 1) fileName
		return ()

	main :: IO ()
	main = do
		(fileName:count:_)	<- getArgs
		loop (read count::Int) fileName
