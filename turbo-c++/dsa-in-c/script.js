function searchProblems() {
    let searchQuery = document.getElementById("searchBar").value.toLowerCase();
    let programItems = document.querySelectorAll('.program-item');
    let found = false;

    programItems.forEach(item => {
        let programName = item.querySelector('.program-name').innerText.toLowerCase();
        if (programName.includes(searchQuery)) {
            item.style.display = 'flex'; 
            found = true;
        } else {
            item.style.display = 'none'; 
        }
    });

    // If no problem is found in the list
    if (!found && searchQuery !== '') {
        document.getElementById('problem-form').style.display = 'block'; 
    } else {
        document.getElementById('message').innerText = '';
        document.getElementById('problem-form').style.display = 'none'; 
    }
}
