Some things to know, in case they call you up to Bocal lol


### Git

- **What it is**: A distributed version control system.
- **Primary Use**: Tracking changes in source code during software development.
- **Key Features**:
    - Keeps a history of changes.
    - Allows branching and merging.
    - Supports collaborative work.

### GitHub

- **What it is**: A cloud-based hosting service for Git repositories.
- **Primary Use**: Storing, sharing, and managing Git repositories with additional features.
- **Key Features**:
    - User-friendly web interface.
    - Collaboration tools (pull requests, issue tracking, project management).
    - Integration with various tools and services.

### GitLab

- **What it is**: Another cloud-based hosting service for Git repositories, similar to GitHub, but also offers a self-hosted version.
- **Primary Use**: Storing, sharing, and managing Git repositories with additional features.
- **Key Features**:
    - Comprehensive DevOps platform (CI/CD, project planning, code management).
    - Self-hosting option for greater control and security.
    - Extensive integration capabilities.

### `git log -5 --pretty=%H`

- **`git log`**: Shows the commit logs.
- **`5`**: Limits the output to the last 5 commits.
- **`-pretty=%H`**: Formats the output to show only the commit hash (SHA-1).

### `git ls-files --others --ignored --exclude-standard`

- **`git ls-files`**: Lists the files in the Git repository.
- **`-others`**: Shows files not tracked by Git.
- **`-ignored`**: Shows files ignored by Git (based on `.gitignore`).
- **`-exclude-standard`**: Excludes files that are ignored by the standard Git exclusion rules (e.g., those in `.gitignore`).
