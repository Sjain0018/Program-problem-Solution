function downloadSolution(solutionId) {
 
    alert("Downloading " + solutionId + "...");
}

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
        document.getElementById('message').innerText = "Aapki problem jaldi solve ho jayegi!";
        document.getElementById('problem-form').style.display = 'block'; 
    } else {
        document.getElementById('message').innerText = '';
        document.getElementById('problem-form').style.display = 'none'; 
    }
}

document.getElementById('userProblemForm').addEventListener('submit', function(event) {
    event.preventDefault();

    let problemName = document.getElementById('problemName').value;

    // Sending data to the server
    sendProblemToServer(problemName);

    // Optionally show confirmation
    alert("Your problem has been sent to the programmer!");

    // Clear the form
    document.getElementById('problemName').value = '';
});


