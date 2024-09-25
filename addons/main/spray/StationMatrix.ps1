# genereate modifiers
magick composite OROO.png OORO.png ORRO.png
magick composite OROO.png OOOR.png OROR.png
magick composite OORO.png OOOR.png OORR.png
magick composite OROO.png OORR.png ORRR.png
# generate variants
$station = @('A','B','C','D','E','F')
$base = @("AOOO.png","BOOO.png","COOO.png","DOOO.png","EOOO.png","FOOO.png")
$modif = @("OROO.png","OORO.png","ORRO.png","OOOR.png","OROR.png","ORRR.png")

foreach($b in $base) {
	
	foreach($c in $modif) {
		$variant = -join($b.Substring(0,1),$c.Substring(1,7))
		magick composite $b $c $variant
	}
}
