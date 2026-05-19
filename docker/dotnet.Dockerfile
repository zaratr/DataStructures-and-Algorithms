FROM mcr.microsoft.com/dotnet/sdk:5.0

WORKDIR /workspace

CMD ["bash", "-lc", "cd c-sharp/DataStructures/DataStructures && dotnet restore && dotnet build --no-restore && cd ../CodeChallenges && dotnet restore && dotnet build --no-restore && cd ../DataStructuresTests && dotnet restore && dotnet build --no-restore && dotnet test --no-build --verbosity normal && cd ../CodeChallengesTests && dotnet restore && dotnet build --no-restore && dotnet test --no-build --verbosity normal"]
