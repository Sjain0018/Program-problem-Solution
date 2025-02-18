function searchProblems() {
    let searchQuery = document.getElementById("searchBar").value.toLowerCase();
    let programItems = document.querySelectorAll('.card'); 
    let found = false;

    programItems.forEach(item => {
        let programName = item.querySelector('.card-back h3').innerText.toLowerCase(); 
        if (programName.includes(searchQuery)) {
            item.style.display = 'flex'; 
            found = true;
        } else {
            item.style.display = 'none'; 
        }
    });

    // Show a message if no problem is found
    if (!found && searchQuery !== '') {
        document.getElementById('problem-form').style.display = 'block'; 
    } else {
        document.getElementById('problem-form').style.display = 'none'; 
    }
}
