# Design Logbook

**Team:**
**Members:**
**Project:**
**Repository:**
**Mentor tutor:**
**Lab stream:**

---

## How to use this file

Keep this file in your repository and commit it as you go. It is worth 20% of your course mark.

Three things make the difference between a logbook that scores well and one that does not:

1. **Write it in the week it describes.** Commit history shows when entries were made. A logbook written in the last fortnight is obvious to read, and it is marked accordingly.
2. **Record decisions, not activity.** "Worked on the code" tells a reader nothing. "Decided the cap counts pending bookings as well as confirmed ones, because three of our five interviewees described holding a spot they weren't sure about" tells them everything.
3. **Write down what you were unsure about at the time.** Not just what you concluded. The uncertainty is the interesting part, and it is what you will be asked about in the Week 10 defence.

It should take a team ten minutes a week. Fill in the weekly entry together at the end of your lab, while it is fresh.

> The worked example below is a camera-gear loan system. The same structure works for a game, a trading economy, a voting system, or anything else — wherever you have rules, swap in yours.

---

## Decision log

Number every significant decision and add it here as you make it. Reference these numbers from your weekly entries, your proposal, and your final report — it will save you hours in Week 10, and it is what lets any team member answer "why does it work that way?" in the defence.

| # | Week | Decision | Where it's written up |
|---|------|----------|----------------------|
| D1 | 2 | Scope to camera gear only, not all AV equipment | Week 2 entry |
| D2 | 3 | Loan cap counts pending requests, not just approved ones | Week 3 entry |
| D3 | | | |
| D4 | | | |
| D5 | | | |

---

## Attack and repair log

Start this in Week 5, when you find out who is testing you. Fill in the middle columns in Week 7 and the right-hand ones in Week 8.

| # | Finding received | Severity | Which of our rules it broke | What we changed | How we proved the fix works |
|---|-----------------|----------|----------------------------|-----------------|----------------------------|
| F1 | | | | | |
| F2 | | | | | |
| F3 | | | | | |
| F4 | | | | | |

---

# Weekly entries

Newest at the top, or oldest at the top — pick one and stay consistent.

---

## Week 2 — 21–25 September  *(worked example — delete this entry and write your own)*

### What we did
Interviewed five people who borrow gear from the film society: two committee members who run the loans, three members who borrow. Sketched a first flow for the request-and-approve path. Narrowed the scope.

### Decisions

| # | Decision | Why | What we rejected | Still unsure about |
|---|----------|-----|------------------|-------------------|
| D1 | Scope to cameras and lenses only, not lighting or audio | Every interviewee described the same fight over two specific camera bodies. Lighting gear was never contested. | Covering all society equipment — too broad for ten weeks, and the interesting conflict is all in the cameras | Whether tripods count as part of a camera booking or a separate item |
| D2 | Loans are requested and approved, not booked instantly | Committee members said they need to check the borrower has returned previous gear before saying yes | Instant self-service booking — simpler to build, but removes the human check the users told us they rely on | Whether approval should be able to happen automatically for members with a clean record |

### Changed our minds
We started the week assuming this was a calendar problem — who has the camera on which day. Two interviews in, it became clear the real problem is people not returning things on time, which is a completely different design. Our flow now has a return step with consequences, which our first sketch did not have at all.

### Contributions

| Member | What they did this week |
|--------|------------------------|
| Alex | Ran two interviews, wrote up findings |
| Priya | Ran three interviews, drafted the request flow |
| Sam | Set up the repository, drafted the scope section of the proposal |
| Jordan | Wrote the interview questions, took notes in all five interviews |

### Next week
Write the rule set, including what happens on a late return. Decide whether pending requests count against the cap.

---

## Week N — *dates*

### What we did

### Decisions

| # | Decision | Why | What we rejected | Still unsure about |
|---|----------|-----|------------------|-------------------|
| | | | | |

### Changed our minds
*Anything you thought last week that you no longer think, and what changed your mind. If nothing changed, write "nothing this week" — but check that's true.*

### Contributions

| Member | What they did this week |
|--------|------------------------|
| | |
| | |
| | |
| | |

### Next week

---

*Copy the block above for each teaching week: 1, 2, 3, 4, 5, 7, 8, 9, 10. Week 6 is flex week — if you worked, log it.*

---

## How this is marked

| Criterion | Weight | What the marker looks for |
|-----------|--------|--------------------------|
| Kept as you went | 20 | Dated entries across the teaching weeks, with commit history showing they were written at the time |
| Decisions, not activity | 25 | Decisions recorded with reasons, options rejected, and what you were uncertain about |
| Evidence of iteration | 25 | You revisited something, and the entry says what prompted it and what evidence drove the change |
| Contribution record | 20 | A weekly line per member, complete across the term, specific enough to check against the repository |
| Professional quality | 10 | Consistent, concise, navigable — another engineer could reconstruct how your design got here |

Spot-reviewed by your mentor in Week 5. Assessed in Week 10.

This is also the evidence used if team marks need adjusting for uneven contribution, so keeping the contribution table current is in everyone's interest — including yours.