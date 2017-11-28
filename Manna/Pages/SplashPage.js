var Observable = require("FuseJS/Observable");
var videoPosition = Observable('');

function goToMenuPage() {
	router.push("menu");
}

module.exports= {
	goToMenuPage: goToMenuPage,
	videoPosition: videoPosition
};