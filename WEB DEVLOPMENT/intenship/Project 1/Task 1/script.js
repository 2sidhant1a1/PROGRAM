window.addEventListener("scroll", function() {
    let navbar = document.getElementById("navbar");
    if (window.scrollY > 50) {
        navbar.style.backgroundColor = "#222"; // Darker color when scrolling
    } else {
        navbar.style.backgroundColor = "#333";
    }
});
