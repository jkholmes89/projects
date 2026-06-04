let modal = document.querySelector("#contact-form");
let openBtn = document.querySelectorAll(".open-modal");
let closeBtn = document.querySelector(".btn-close");
openBtn.forEach((element) => {
  element.addEventListener("click", () => modal.showModal());
});
closeBtn.addEventListener("click", () => modal.close());
